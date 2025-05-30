require 'language_pack/base'
require 'language_pack/shell_helpers'

module LanguagePack::Installers; end

class LanguagePack::Installers::OpenSSLInstaller
  include LanguagePack::ShellHelpers

  OPENSSL_VERSION = "1.0.1e"
  OPENSSL_URL = "https://moonshot-buildpack-ruby.s3.amazonaws.com/binaries/openssl-#{OPENSSL_VERSION}.tgz"
  
  def initialize(build_path)
    @build_path = build_path
  end

  def install
    openssl_dir = "#{@build_path}/vendor/openssl"
    
    topic "Fetching OpenSSL binaries"
    FileUtils.mkdir_p(openssl_dir)
    Dir.chdir(openssl_dir) do
      run("curl #{OPENSSL_URL} -s -o - | tar xzf -")
    end
    topic "Got OpenSSL binaries"
    
    # Create a .profile.d script to set environment variables for OpenSSL
    profile_dir = "#{@build_path}/.profile.d"
    FileUtils.mkdir_p(profile_dir)
    File.open("#{profile_dir}/ruby_openssl.sh", 'w') do |f|
      f.puts "export OPENSSL_DIR=\"$HOME/vendor/openssl\""
      f.puts "export SSL_CERT_FILE=\"$HOME/vendor/openssl/ssl/cert.pem\""
      f.puts "export LD_LIBRARY_PATH=\"$HOME/vendor/openssl/lib:$LD_LIBRARY_PATH\""
      f.puts "export LIBRARY_PATH=\"$HOME/vendor/openssl/lib:$LIBRARY_PATH\""
      f.puts "export CPATH=\"$HOME/vendor/openssl/include:$CPATH\""
    end
    
    openssl_dir
  end
end
