/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface TLSystemSound : NSObject {

	unsigned _soundID;
	BOOL _shouldDisposeOfSoundID;
	NSURL* _soundFileURL;
	NSURL* _vibrationPatternFileURL;

}

@property (nonatomic,readonly) NSURL * soundFileURL;                         //@synthesize soundFileURL=_soundFileURL - In the implementation block
@property (nonatomic,readonly) unsigned soundID; 
@property (nonatomic,readonly) NSURL * vibrationPatternFileURL;              //@synthesize vibrationPatternFileURL=_vibrationPatternFileURL - In the implementation block
-(void)dealloc;
-(id)description;
-(unsigned)soundID;
-(id)initWithSoundFileURL:(id)arg1 soundID:(unsigned)arg2 vibrationPatternFileURL:(id)arg3 ;
-(NSURL *)soundFileURL;
-(NSURL *)vibrationPatternFileURL;
@end

