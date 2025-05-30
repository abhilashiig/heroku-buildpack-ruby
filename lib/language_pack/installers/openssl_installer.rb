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
    
    openssl_dir
  end
end
