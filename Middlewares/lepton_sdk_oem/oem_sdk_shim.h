#ifndef LEPTON_SDK_OEM_H_
#define LEPTON_SDK_OEM_H_

typedef enum
{
   VIDEO_OUTPUT_FORMAT_RAW8 = 0,
   VIDEO_OUTPUT_FORMAT_RGB888 = 3,
   VIDEO_OUTPUT_FORMAT_RAW14 = 7,

} VIDEO_OUTPUT_FORMAT;

HAL_StatusTypeDef set_video_output_format(LEP_CAMERA_PORT_DESC_T_PTR portDescPtr, VIDEO_OUTPUT_FORMAT format);

#endif
