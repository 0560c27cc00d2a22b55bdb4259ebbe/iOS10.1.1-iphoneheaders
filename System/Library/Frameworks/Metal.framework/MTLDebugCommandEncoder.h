/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDebugCommandEncoder <MTLCommandEncoder>
@optional
-(void)dumpBuffer:(id)arg1 name:(const char*)arg2;
-(void)dumpTexture:(id)arg1 name:(const char*)arg2;
-(void)postFinishEvent:(const char*)arg1;

@required
-(void)kprintfBytes:(const char*)arg1 length:(unsigned long long)arg2;
-(void)IOLogBytes:(const char*)arg1 length:(unsigned long long)arg2;
-(void)kprintf:(id)arg1;
-(void)IOLog:(id)arg1;

@end

