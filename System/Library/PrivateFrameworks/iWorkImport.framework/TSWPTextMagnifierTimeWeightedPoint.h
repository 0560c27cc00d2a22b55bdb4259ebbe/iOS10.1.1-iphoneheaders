/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSWPTextMagnifierTimeWeightedPoint : NSObject {

	long long m_index;
	TSCHLegendAnchorLine m_points[16];

}

@property (nonatomic,readonly) CGPoint weightedPoint; 
-(void)clearHistory;
-(void)addPoint:(CGPoint)arg1 ;
-(BOOL)historyCovers:(double)arg1 ;
-(double)distanceCoveredInInterval:(double)arg1 ;
-(CGPoint)weightedPoint;
-(double)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2 ;
-(CGSize)displacementInInterval:(double)arg1 priorTo:(double)arg2 ;
-(CGSize)displacementInInterval:(double)arg1 ;
@end

