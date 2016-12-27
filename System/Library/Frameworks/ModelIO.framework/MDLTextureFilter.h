/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MDLTextureFilter : NSObject {

	unsigned long long sWrapMode;
	unsigned long long tWrapMode;
	unsigned long long rWrapMode;
	unsigned long long minFilter;
	unsigned long long magFilter;
	unsigned long long mipFilter;

}

@property (assign,nonatomic) unsigned long long sWrapMode; 
@property (assign,nonatomic) unsigned long long tWrapMode; 
@property (assign,nonatomic) unsigned long long rWrapMode; 
@property (assign,nonatomic) unsigned long long minFilter; 
@property (assign,nonatomic) unsigned long long magFilter; 
@property (assign,nonatomic) unsigned long long mipFilter; 
-(unsigned long long)minFilter;
-(unsigned long long)magFilter;
-(id)init;
-(void)setSWrapMode:(unsigned long long)arg1 ;
-(void)setTWrapMode:(unsigned long long)arg1 ;
-(unsigned long long)rWrapMode;
-(void)setRWrapMode:(unsigned long long)arg1 ;
-(void)setMinFilter:(unsigned long long)arg1 ;
-(void)setMagFilter:(unsigned long long)arg1 ;
-(void)setMipFilter:(unsigned long long)arg1 ;
-(unsigned long long)sWrapMode;
-(unsigned long long)tWrapMode;
-(unsigned long long)mipFilter;
@end

