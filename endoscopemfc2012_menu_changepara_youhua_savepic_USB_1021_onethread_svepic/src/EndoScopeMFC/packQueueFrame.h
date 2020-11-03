#ifndef __PACK_QUEUE_FRAME_H__
#define __PACK_QUEUE_FRAME_H__

void WritePackQueueFrame(unsigned char *buffer,int length);
int ReadPackQueueFrame(unsigned char *buffer,int *length);
#endif
