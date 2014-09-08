/*
 * Copyright (C) 2014 Glyptodon LLC
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "config.h"

#include "conf-file.h"
#include "conf-parse.h"

#include <stdlib.h>
#include <string.h>

int guacd_conf_parse_file(guacd_config* conf, int fd) {

    /* STUB */
    return 0;
}

guacd_config* guacd_conf_load() {

    guacd_config* conf = malloc(sizeof(guacd_config));
    if (conf == NULL)
        return NULL;

    /* Load defaults */
    conf->bind_host = NULL;
    conf->bind_port = strdup("4822");
    conf->pidfile = NULL;
    conf->foreground = 0;

#ifdef ENABLE_SSL
    conf->cert_file = NULL;
    conf->key_file = NULL;
#endif

    return conf;

}
