Saffire
=======
Simple POC for lexing/parsing a language. Right now, the parser does a bit of interpreting.

Note:
-----
This is NOT ment as a replacement for ANY language currently available. This is just a way for a few people to learn more about writing such a language, its problems and challenges. You are more than welcome to join us and help us out in any way possible. Be it with just writing the language specification or to the actual designing of the system.

We are aiming to have a small specification which we can lex/parse and compile to bytecode. From that bytecode, another system should be able to interpret those opcodes (and/or later, JIT-compile it).

We're on freenode as well, at channel #saffire. Websites are coming up as soon as we get some sort of specification of the ground.

Needs:

  - A language specificaton (see /examples)
  - Ability to create an AST, and we should create opcodes.
  - interpret these opcodes through a standalone interpreter
  - have documentation
  - have a re-entrant lexer/parser: (implement %pure_parser)
  - everything else
