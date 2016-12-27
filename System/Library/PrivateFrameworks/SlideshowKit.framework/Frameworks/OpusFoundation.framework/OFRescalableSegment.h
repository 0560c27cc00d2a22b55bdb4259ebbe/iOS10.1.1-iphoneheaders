/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OFRescalableSegment.h>

@protocol OFRescalableSegment <NSObject>
@property (assign) double defaultDuration; 
@property (assign) double minimumDuration; 
@property (assign) double maximumDuration; 
@property (assign) double compressibility; 
@property (assign) double expandability; 
@required
-(void)setMaximumDuration:(double)arg1;
-(double)maximumDuration;
-(void)setMinimumDuration:(double)arg1;
-(double)compressibility;
-(void)setCompressibility:(double)arg1;
-(double)expandability;
-(void)setExpandability:(double)arg1;
-(void)setDefaultDuration:(double)arg1;
-(double)minimumDuration;
-(double)defaultDuration;

@end


@class NSString;

@interface OFRescalableSegment : NSObject <OFRescalableSegment> {

	double _defaultDuration;
	double _minimumDuration;
	double _maximumDuration;
	double _compressibility;
	double _expandability;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) double defaultDuration;                          //@synthesize defaultDuration=_defaultDuration - In the implementation block
@property (assign) double minimumDuration;                          //@synthesize minimumDuration=_minimumDuration - In the implementation block
@property (assign) double maximumDuration;                          //@synthesize maximumDuration=_maximumDuration - In the implementation block
@property (assign) double compressibility;                          //@synthesize compressibility=_compressibility - In the implementation block
@property (assign) double expandability;                            //@synthesize expandability=_expandability - In the implementation block
+(id)rescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 maximumDuration:(double)arg3 ;
+(id)moreRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 maximumDuration:(double)arg3 ;
+(id)lessRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 maximumDuration:(double)arg3 ;
+(id)nonRescalableSegmentWithDuration:(double)arg1 ;
+(id)rescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 ;
+(id)moreRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 ;
+(id)lessRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 ;
-(NSString *)description;
-(void)setMaximumDuration:(double)arg1 ;
-(double)maximumDuration;
-(void)setMinimumDuration:(double)arg1 ;
-(double)compressibility;
-(void)setCompressibility:(double)arg1 ;
-(double)expandability;
-(void)setExpandability:(double)arg1 ;
-(void)setDefaultDuration:(double)arg1 ;
-(double)minimumDuration;
-(double)defaultDuration;
@end

