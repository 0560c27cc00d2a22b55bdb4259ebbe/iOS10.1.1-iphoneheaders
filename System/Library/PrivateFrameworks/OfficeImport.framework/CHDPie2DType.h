/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CHDChartType.h>

@interface CHDPie2DType : CHDChartType {

	int mFirstSliceAngle;
	BOOL mDoughnutType;
	BOOL mPieOfPieType;
	BOOL mBarOfPieType;

}
-(id)contentFormat;
-(BOOL)isDoughnutType;
-(id)initWithChart:(id)arg1 ;
-(void)setFirstSliceAngle:(int)arg1 ;
-(void)setDoughnutType:(BOOL)arg1 ;
-(void)setPieOfPieType:(BOOL)arg1 ;
-(void)setBarOfPieType:(BOOL)arg1 ;
-(int)defaultLabelPosition;
-(int)firstSliceAngle;
-(BOOL)isPieOfPieType;
-(BOOL)isBarOfPieType;
-(BOOL)hasExplosion;
@end

