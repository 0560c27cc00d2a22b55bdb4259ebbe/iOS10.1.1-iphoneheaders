/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSDictionary, NSMutableArray, NSString, NSMapTable, NSMutableDictionary, NSNumberFormatter;

@interface _MKScaleUnitsView : UIView {

	BOOL _useLightText;
	double _segmentLengthInPixels;
	double _unitsWidth;
	double _justUnitsWidth;
	NSDictionary* _legendAttributes;
	NSMutableArray* _strings;
	NSString* _legendBaseString;
	NSString* _unitsString;
	NSString* _unpaddedUnitsString;
	NSMapTable* _legendStringWidthCache;
	NSMutableDictionary* _legendStringForDistanceStringCache;
	NSNumberFormatter* _floatNumberFormatter;

}

@property (assign,nonatomic) BOOL useLightText; 
@property (assign,nonatomic) double segmentLengthInPixels; 
@property (nonatomic,readonly) double unitsWidth;                                   //@synthesize unitsWidth=_unitsWidth - In the implementation block
@property (nonatomic,retain) NSString * legendBaseString;                           //@synthesize legendBaseString=_legendBaseString - In the implementation block
@property (nonatomic,retain) NSString * unitsString;                                //@synthesize unitsString=_unitsString - In the implementation block
@property (nonatomic,copy) NSString * unpaddedUnitsString;                          //@synthesize unpaddedUnitsString=_unpaddedUnitsString - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * floatNumberFormatter;              //@synthesize floatNumberFormatter=_floatNumberFormatter - In the implementation block
-(id)init;
-(void)setUnits:(id)arg1 ;
-(void)clearCaches:(id)arg1 ;
-(double)_widthForString:(id)arg1 attributes:(id)arg2 ;
-(void)_calculateLegend:(BOOL)arg1 ;
-(BOOL)canDisplaySegment:(unsigned long long)arg1 ;
-(void)setSegmentLengthInPixels:(double)arg1 ;
-(void)setUseLightText:(BOOL)arg1 ;
-(BOOL)useLightText;
-(id)_uncachedLegendStringsForDistanceString:(id)arg1 ;
-(id)_legendStringForDistanceString:(id)arg1 appendUnits:(BOOL)arg2 index:(int)arg3 ;
-(double)unitsWidth;
-(NSString *)unitsString;
-(void)setUnitsString:(NSString *)arg1 ;
-(NSString *)unpaddedUnitsString;
-(void)setUnpaddedUnitsString:(NSString *)arg1 ;
-(NSString *)legendBaseString;
-(void)setLegendBaseString:(NSString *)arg1 ;
-(NSNumberFormatter *)floatNumberFormatter;
-(void)setFloatNumberFormatter:(NSNumberFormatter *)arg1 ;
@end

