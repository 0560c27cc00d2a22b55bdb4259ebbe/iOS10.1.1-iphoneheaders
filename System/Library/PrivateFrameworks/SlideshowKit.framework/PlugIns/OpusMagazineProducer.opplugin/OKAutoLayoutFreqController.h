/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMagazineProducer.opplugin/OpusMagazineProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface OKAutoLayoutFreqController : NSObject {

	NSMutableArray* _pages;
	long long _counts[6];
	NSMutableArray* _pageFrequency;
	NSMutableDictionary* _layoutsByResolution;

}
-(id)bestLayoutByFreqOfAnyUpsFromLayouts:(id)arg1 ;
-(float)_freqOfUp:(id)arg1 ;
-(void)addOnePageLayout:(id)arg1 ;
-(BOOL)_isLayout:(id)arg1 usedInLast:(long long)arg2 ;
-(id)_freqOrderFromHightToLow;
-(void)printStatistics;
-(id)bestLayoutByFreqOfSameUpFromLayouts:(id)arg1 forResolution:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end

