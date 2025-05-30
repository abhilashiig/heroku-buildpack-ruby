# -*- encoding: utf-8 -*-
# stub: irb 1.0.0 ruby lib

Gem::Specification.new do |s|
  s.name = "irb".freeze
  s.version = "1.0.0"

  s.required_rubygems_version = Gem::Requirement.new(">= 0".freeze) if s.respond_to? :required_rubygems_version=
  s.require_paths = ["lib".freeze]
  s.authors = ["Keiju ISHITSUKA".freeze]
  s.bindir = "exe".freeze
  s.date = "2025-05-29"
  s.description = "Interactive Ruby command-line tool for REPL (Read Eval Print Loop).".freeze
  s.email = ["keiju@ruby-lang.org".freeze]
  s.executables = ["irb".freeze]
  s.files = ["exe/irb".freeze, "irb.rb".freeze, "irb/cmd/chws.rb".freeze, "irb/cmd/fork.rb".freeze, "irb/cmd/help.rb".freeze, "irb/cmd/load.rb".freeze, "irb/cmd/nop.rb".freeze, "irb/cmd/pushws.rb".freeze, "irb/cmd/subirb.rb".freeze, "irb/completion.rb".freeze, "irb/context.rb".freeze, "irb/ext/change-ws.rb".freeze, "irb/ext/history.rb".freeze, "irb/ext/loader.rb".freeze, "irb/ext/multi-irb.rb".freeze, "irb/ext/save-history.rb".freeze, "irb/ext/tracer.rb".freeze, "irb/ext/use-loader.rb".freeze, "irb/ext/workspaces.rb".freeze, "irb/extend-command.rb".freeze, "irb/frame.rb".freeze, "irb/help.rb".freeze, "irb/init.rb".freeze, "irb/input-method.rb".freeze, "irb/inspector.rb".freeze, "irb/lc/error.rb".freeze, "irb/lc/ja/encoding_aliases.rb".freeze, "irb/lc/ja/error.rb".freeze, "irb/locale.rb".freeze, "irb/magic-file.rb".freeze, "irb/notifier.rb".freeze, "irb/output-method.rb".freeze, "irb/ruby-lex.rb".freeze, "irb/ruby-token.rb".freeze, "irb/slex.rb".freeze, "irb/src_encoding.rb".freeze, "irb/version.rb".freeze, "irb/workspace.rb".freeze, "irb/ws-for-case-2.rb".freeze, "irb/xmp.rb".freeze]
  s.homepage = "https://github.com/ruby/irb".freeze
  s.licenses = ["BSD-2-Clause".freeze]
  s.rubygems_version = "3.0.3".freeze
  s.summary = "Interactive Ruby command-line tool for REPL (Read Eval Print Loop).".freeze

  if s.respond_to? :specification_version then
    s.specification_version = 4

    if Gem::Version.new(Gem::VERSION) >= Gem::Version.new('1.2.0') then
      s.add_development_dependency(%q<bundler>.freeze, [">= 0"])
      s.add_development_dependency(%q<rake>.freeze, [">= 0"])
    else
      s.add_dependency(%q<bundler>.freeze, [">= 0"])
      s.add_dependency(%q<rake>.freeze, [">= 0"])
    end
  else
    s.add_dependency(%q<bundler>.freeze, [">= 0"])
    s.add_dependency(%q<rake>.freeze, [">= 0"])
  end
end
