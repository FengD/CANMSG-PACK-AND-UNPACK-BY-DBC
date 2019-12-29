/**
* Copyright (C) 2019 Hirain Technologies
* License: Modified BSD Software License Agreement
* Author: Feng DING
* Description:
*/

#ifndef _DBC_CANMSG_UNPACK_H_
#define _DBC_CANMSG_UNPACK_H_

#include <map>
#include <string>
#include <string.h>
#include "canmsg_define.h"

namespace can_util {

enum UnpackStat {
  UNPACK_MESSAGE_ID_MISMATCH = -3,
  UNPACK_MESSAGE_DATA_LEN_MISMATCH = -2,
  UNPACK_VALUE_SIZE_NOT_MATCHING = -1,
  UNPACK_SUCCESS = 0
};
/** the dbc unpack used to transform the can msg to value
* @param in [struct Message] the message that you want to unpack
* @param in [struct Canmsg] the canmsg
* @param in [unsigned int] the size of the value list
* @param out [double array] the array of the values
*/
int unpackCanmsg (const Message &m, const Canmsg &msg, const size_t valueSize, double *value);

/**
* pack one Signal
* @param in [struct Signal] the Signal that you want to unpack
* @param in [unsigned char array] the data array of the can msg
* @return [double] the value that you unpack from the Signal
*/
real64_T unpackSignal (const Signal &s, const uint8_T *data);

} // namespace can_util

#endif //_DBC_CANMSG_UNPACK_H_
