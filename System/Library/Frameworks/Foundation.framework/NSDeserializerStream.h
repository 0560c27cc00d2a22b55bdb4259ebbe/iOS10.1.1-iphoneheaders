/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSDeserializerStream
@required
-(id)initFromMemoryNoCopy:(const void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;
-(int)readInt;
-(unsigned long long)readAlignedDataSize;
-(void)readData:(void*)arg1 length:(unsigned long long)arg2;

@end

