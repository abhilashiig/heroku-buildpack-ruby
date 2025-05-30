# -*- encoding: utf-8 -*-
# stub: bigdecimal 1.4.1 ruby lib
# stub: ext/bigdecimal/extconf.rb ext/bigdecimal/util/extconf.rb

Gem::Specification.new do |s|
  s.name = "bigdecimal".freeze
  s.version = "1.4.1"

  s.required_rubygems_version = Gem::Requirement.new(">= 0".freeze) if s.respond_to? :required_rubygems_version=
  s.require_paths = ["lib".freeze]
  s.authors = ["Kenta Murata".freeze, "Zachary Scott".freeze, "Shigeo Kobayashi".freeze]
  s.date = "2025-05-29"
  s.description = "This library provides arbitrary-precision decimal floating-point number class.".freeze
  s.email = ["mrkn@mrkn.jp".freeze]
  s.extensions = ["ext/bigdecimal/extconf.rb".freeze, "ext/bigdecimal/util/extconf.rb".freeze]
  s.files = ["bigdecimal.rb".freeze, "bigdecimal.so".freeze, "bigdecimal/jacobian.rb".freeze, "bigdecimal/ludcmp.rb".freeze, "bigdecimal/math.rb".freeze, "bigdecimal/newton.rb".freeze, "bigdecimal/util.rb".freeze, "bigdecimal/util.so".freeze, "ext/bigdecimal/extconf.rb".freeze, "ext/bigdecimal/util/extconf.rb".freeze]
  s.homepage = "https://github.com/ruby/bigdecimal".freeze
  s.licenses = ["ruby".freeze]
  s.required_ruby_version = Gem::Requirement.new(">= 2.3.0".freeze)
  s.rubygems_version = "3.0.3".freeze
  s.summary = "Arbitrary-precision decimal floating-point number library.".freeze

  if s.respond_to? :specification_version then
    s.specification_version = 4

    if Gem::Version.new(Gem::VERSION) >= Gem::Version.new('1.2.0') then
      s.add_development_dependency(%q<rake>.freeze, ["~> 10.0"])
      s.add_development_dependency(%q<rake-compiler>.freeze, [">= 0.9"])
      s.add_development_dependency(%q<rake-compiler-dock>.freeze, [">= 0.6.1"])
      s.add_development_dependency(%q<minitest>.freeze, ["< 5.0.0"])
      s.add_development_dependency(%q<pry>.freeze, [">= 0"])
    else
      s.add_dependency(%q<rake>.freeze, ["~> 10.0"])
      s.add_dependency(%q<rake-compiler>.freeze, [">= 0.9"])
      s.add_dependency(%q<rake-compiler-dock>.freeze, [">= 0.6.1"])
      s.add_dependency(%q<minitest>.freeze, ["< 5.0.0"])
      s.add_dependency(%q<pry>.freeze, [">= 0"])
    end
  else
    s.add_dependency(%q<rake>.freeze, ["~> 10.0"])
    s.add_dependency(%q<rake-compiler>.freeze, [">= 0.9"])
    s.add_dependency(%q<rake-compiler-dock>.freeze, [">= 0.6.1"])
    s.add_dependency(%q<minitest>.freeze, ["< 5.0.0"])
    s.add_dependency(%q<pry>.freeze, [">= 0"])
  end
end
