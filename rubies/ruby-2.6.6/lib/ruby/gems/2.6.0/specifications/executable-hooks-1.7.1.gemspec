# -*- encoding: utf-8 -*-
# stub: executable-hooks 1.7.1 ruby lib
# stub: ext/wrapper_installer/extconf.rb

Gem::Specification.new do |s|
  s.name = "executable-hooks".freeze
  s.version = "1.7.1"

  s.required_rubygems_version = Gem::Requirement.new(">= 0".freeze) if s.respond_to? :required_rubygems_version=
  s.require_paths = ["lib".freeze]
  s.authors = ["Michal Papis".freeze]
  s.date = "2024-01-07"
  s.email = ["mpapis@gmail.com".freeze]
  s.executables = ["executable-hooks-uninstaller".freeze]
  s.extensions = ["ext/wrapper_installer/extconf.rb".freeze]
  s.files = ["bin/executable-hooks-uninstaller".freeze, "ext/wrapper_installer/extconf.rb".freeze]
  s.homepage = "https://github.com/rvm/executable-hooks".freeze
  s.licenses = ["Apache-2.0".freeze]
  s.post_install_message = "# In case of problems run the following command to update binstubs:\n    gem regenerate_binstubs\n".freeze
  s.rubygems_version = "3.0.9".freeze
  s.summary = "Hook into rubygems executables allowing extra actions to be taken before executable is run.".freeze

  s.installed_by_version = "3.0.9" if s.respond_to? :installed_by_version

  if s.respond_to? :specification_version then
    s.specification_version = 4

    if Gem::Version.new(Gem::VERSION) >= Gem::Version.new('1.2.0') then
      s.add_development_dependency(%q<tf>.freeze, ["~> 0.4"])
    else
      s.add_dependency(%q<tf>.freeze, ["~> 0.4"])
    end
  else
    s.add_dependency(%q<tf>.freeze, ["~> 0.4"])
  end
end
