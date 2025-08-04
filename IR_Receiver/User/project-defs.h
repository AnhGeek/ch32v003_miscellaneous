/*
 * SPDX-License-Identifier: BSD-2-Clause
 * 
 * Copyright (c) 2024 Vincent DEFERT. All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without 
 * modification, are permitted provided that the following conditions 
 * are met:
 * 
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * 
 * 2. Redistributions in binary form must reproduce the above copyright 
 * notice, this list of conditions and the following disclaimer in the 
 * documentation and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS 
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE 
 * COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, 
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, 
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER 
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT 
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN 
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
 * POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef _PROJECT_DEFS_H
#define _PROJECT_DEFS_H

/*
 * Les SDK de tous les micro-contrôleurs d'une même famille
 * (soit CH32Vxxx, soit CH57x/CH58x/CH59x) sont compatibles
 * entre eux à quelques détails près (ex. nom du .h).
 *
 * Afin de faciliter l'écriture de code réutilisabble, on
 * isole ces différences dans ce fichier d'entête project-defs.h,
 * qu'on inclue en tête de tous les fichiers sources du projet.
 *
 * C'est également dans project-defs.h qu'on définira toutes
 * les macros utiles à l'ensemble du projet.
 */

#include <ch32v00x.h>
#include <debug.h>

#include <stdint.h>
#include <stdbool.h>

#define INLINE inline __attribute__((always_inline))

#define MCU_FREQ 48000000
#define UART_BAUD_RATE 9600

#endif // _PROJECT_DEFS_H
