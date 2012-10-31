/*
 Copyright (c) 2012, The Saffire Group
 All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
     * Redistributions of source code must retain the above copyright
       notice, this list of conditions and the following disclaimer.
     * Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.
     * Neither the name of the <organization> nor the
       names of its contributors may be used to endorse or promote products
       derived from this software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY
 DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
#include <stdio.h>
#include <getopt.h>
#include <stdlib.h>
#include "command.h"
#include "general/parse_options.h"

/* Usage string */
static const char help[]   = "Executes a saffire script.\n"
                             "\n"
                             "Global settings:\n"
                             "    --dot, -d <FILE>        Generate a DOT file\n";

char *dot_file = NULL;

static int cmd_exec(void) {
    printf("exec!");
    return 0;
}

static void opt_dot(void *data) {
    dot_file = (char *)data;
}


static struct saffire_option global_options[] = {
        { "dot", "d", required_argument, opt_dot },
        { 0, 0, 0, 0 }
};

struct _command_info info_exec = {
                                    "Execute saffire script",
                                    cmd_exec,
                                    global_options,
                                    NULL,
                                    help,
                                 };



//  Init stuff:
//    setlocale(LC_ALL,"");
//    context_init();
//    object_init();
//    module_init();
//
//    parse_options(argc, argv);
//
//    // Opmode CLI is easy enough
//    if ((op_mode & OPMODE_CLI) == OPMODE_CLI) {
//        print_version();
//        interactive();
//        return 0;
//    }
//
//    // Otherwise we can run from a file
//    ast_root = ast_generate_from_file(source_file);
//
//    if ((op_mode & OPMODE_DOTFILE) == OPMODE_DOTFILE) {
//        // generate DOT file
//        dot_generate(ast_root, dot_file);
//    }
//    if ((op_mode & OPMODE_LINT) == OPMODE_LINT) {
//        // Do nothing for lint check. It's ok, since there is an AST
//        printf ("Syntax OK\n");
//    } else {
//        // Otherwise, just interpret it
//        saffire_interpreter(ast_root);
//    }
//

//  Fini Stuff:
//    // Release memory of ast_root
//    if (ast_root != NULL) {
//        ast_free_node(ast_root);
//    }
//
//    module_fini();
//    object_fini();
//    context_fini();
//    return 0;
//}
