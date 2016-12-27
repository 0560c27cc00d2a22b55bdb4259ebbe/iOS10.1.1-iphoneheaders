/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CHDChart, CHDData, OADGraphicProperties;

@interface CHDErrorBar : NSObject {

	CHDChart* mChart;
	double mValue;
	int mType;
	int mValueType;
	int mDirection;
	BOOL mNoEndCap;
	CHDData* mMinusValues;
	CHDData* mPlusValues;
	OADGraphicProperties* mGraphicProperties;

}
+(id)errorBarWithChart:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(double)value;
-(void)setValue:(double)arg1 ;
-(void)setDirection:(int)arg1 ;
-(int)direction;
-(int)valueType;
-(id)graphicProperties;
-(id)initWithChart:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(BOOL)isNoEndCap;
-(id)minusValues;
-(id)plusValues;
-(void)setValueType:(int)arg1 ;
-(void)setNoEndCap:(BOOL)arg1 ;
-(void)setMinusValues:(id)arg1 ;
-(void)setPlusValues:(id)arg1 ;
@end

