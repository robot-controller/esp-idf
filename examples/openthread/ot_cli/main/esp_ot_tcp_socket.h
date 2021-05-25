// Copyright 2021 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#if CONFIG_OPENTHREAD_ENABLE_TCP_SOCKET_EXAMPLE
/**
 * @brief User command "tcpsockserver" process.
 *
 */
void esp_ot_process_tcp_server(void *aContext, uint8_t aArgsLength, char *aArgs[]);

/**
 * @brief User command "tcpsockclient" process.
 *
 */
void esp_ot_process_tcp_client(void *aContext, uint8_t aArgsLength, char *aArgs[]);

#endif // CONFIG_OPENTHREAD_ENABLE_TCP_SOCKET_EXAMPLE
#ifdef __cplusplus
}
#endif
