/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/CacheDeleteAppContainerCaches
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PathObject : NSObject {

	int _len;
	char* _path;

}

@property (readonly) char* path;              //@synthesize path=_path - In the implementation block
@property (readonly) int len;                 //@synthesize len=_len - In the implementation block
+(id)pathObjectWithPath:(const char*)arg1 component:(const char*)arg2 ;
-(id)initWithPath:(const char*)arg1 component:(const char*)arg2 ;
-(int)len;
-(void)dealloc;
-(id)description;
-(char*)path;
@end

