/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NTKCharacterTexture : NSObject {

	unsigned _gid;
	const void* _data;
	int _length;

}

@property (assign,nonatomic) unsigned gid;                    //@synthesize gid=_gid - In the implementation block
@property (nonatomic,readonly) const void* data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) int length;                    //@synthesize length=_length - In the implementation block
-(int)length;
-(const void*)data;
-(id)initWithData:(const void*)arg1 length:(int)arg2 ;
-(unsigned)gid;
-(void)setGid:(unsigned)arg1 ;
@end

