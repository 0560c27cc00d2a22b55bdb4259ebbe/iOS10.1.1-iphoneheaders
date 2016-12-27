/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLBaseLayerStack.h>

@interface BLRetouchLayerStack : BLBaseLayerStack {

	CGContextRef _labContextRef;
	SCD_Struct_BL9 _edgeAwareColor;

}
+(id)layerStack;
-(id)init;
-(void)dealloc;
-(double)timestamp;
-(void)addLayer:(id)arg1 ;
-(void)buildEdgeDetectFromImage:(id)arg1 ;
-(void)setStrokesDataDictionary:(id)arg1 ;
-(id)strokesDataDictionary;
-(BOOL)haveLayerMask;
-(BOOL)readyToDraw;
-(void)updateLabColorsInRect:(CGRect)arg1 ;
-(void)sampleEdgeDetectColorFromRect:(CGRect)arg1 ;
-(void)findEdgesInRect:(CGRect)arg1 result:(CGContextRef)arg2 ;
-(int)maxEdgeSize;
-(int)disabledBrushTypes;
@end

