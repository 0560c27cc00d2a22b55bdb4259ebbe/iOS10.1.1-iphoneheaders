/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, MPNowPlayingInfoLanguageOption;

@interface MPNowPlayingInfoLanguageOptionGroup : NSObject {

	void* _mrLanguageOptionGroup;

}

@property (nonatomic,readonly) void* mrLanguageOptionGroup;                                         //@synthesize mrLanguageOptionGroup=_mrLanguageOptionGroup - In the implementation block
@property (nonatomic,readonly) NSArray * languageOptions; 
@property (nonatomic,readonly) MPNowPlayingInfoLanguageOption * defaultLanguageOption; 
@property (nonatomic,readonly) BOOL allowEmptySelection; 
-(void)dealloc;
-(NSArray *)languageOptions;
-(id)initWithLanguageOptions:(id)arg1 defaultLanguageOption:(id)arg2 allowEmptySelection:(BOOL)arg3 ;
-(MPNowPlayingInfoLanguageOption *)defaultLanguageOption;
-(BOOL)allowEmptySelection;
-(void*)mrLanguageOptionGroup;
@end

