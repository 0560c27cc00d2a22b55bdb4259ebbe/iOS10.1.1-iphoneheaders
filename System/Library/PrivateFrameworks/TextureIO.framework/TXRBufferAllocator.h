/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TXRBufferAllocator <NSObject>
@optional
-(id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocNotification:(/*^block*/id)arg3 error:(id*)arg4;

@required
-(id)newBufferWithLength:(unsigned long long)arg1;

@end

