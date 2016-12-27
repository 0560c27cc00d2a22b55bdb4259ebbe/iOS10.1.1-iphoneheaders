/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADGraphicProperties, CHDTrendlineLabel, EDString;

@interface CHDTrendline : NSObject {

	BOOL mDisplayEquation;
	BOOL mDisplayRSquaredValue;
	double mBackward;
	double mForward;
	double mInterceptYAxis;
	int mPolynomialOrder;
	long long mMovingAveragePeriod;
	int mType;
	OADGraphicProperties* mGraphicProperties;
	CHDTrendlineLabel* mLabel;
	EDString* mName;

}
+(id)trendline;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)graphicProperties;
-(void)setGraphicProperties:(id)arg1 ;
-(BOOL)isDisplayEquation;
-(void)setDisplayEquation:(BOOL)arg1 ;
-(BOOL)isDisplayRSquaredValue;
-(void)setDisplayRSquaredValue:(BOOL)arg1 ;
-(double)backward;
-(void)setBackward:(double)arg1 ;
-(double)forward;
-(void)setForward:(double)arg1 ;
-(double)interceptYAxis;
-(void)setInterceptYAxis:(double)arg1 ;
-(int)polynomialOrder;
-(void)setPolynomialOrder:(int)arg1 ;
-(long long)movingAveragePeriod;
-(void)setMovingAveragePeriod:(long long)arg1 ;
-(id)defaultNameWithSeriesName:(id)arg1 ;
@end

