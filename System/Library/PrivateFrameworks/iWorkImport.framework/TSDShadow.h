/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDMixing.h>
#import <iWorkImport/TSSPreset.h>
#import <iWorkImport/TSSPresetSource.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class TSUColor, NSString;

@interface TSDShadow : NSObject <TSDMixing, TSSPreset, TSSPresetSource, NSCopying, NSMutableCopying> {

	double mAngle;
	double mOffset;
	double mRadius;
	double mOpacity;
	TSUColor* mColor;
	BOOL mEnabled;

}

@property (nonatomic,readonly) double angle; 
@property (nonatomic,readonly) double offset; 
@property (nonatomic,readonly) CGPoint offsetDelta; 
@property (nonatomic,readonly) double radius; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,copy,readonly) TSUColor * color; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) NSString * presetKind; 
+(id)instanceWithArchive:(const ShadowArchive*)arg1 unarchiver:(id)arg2 ;
+(BOOL)canMixWithNilObjects;
+(id)mixableObjectClasses;
+(id)defaultShadow;
+(id)defaultDisabledShadow;
+(id)shadowWithAngle:(double)arg1 offset:(double)arg2 radius:(double)arg3 opacity:(double)arg4 color:(id)arg5 enabled:(BOOL)arg6 ;
+(id)presetKinds;
+(void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 ;
+(id)p_defaultShadowEnabled:(BOOL)arg1 ;
+(id)contactShadowWithAngle:(double)arg1 offset:(double)arg2 radius:(double)arg3 height:(double)arg4 opacity:(double)arg5 color:(id)arg6 enabled:(BOOL)arg7 ;
+(id)shadowWithNSShadow:(id)arg1 ;
+(id)curvedShadowWithOffset:(double)arg1 angle:(double)arg2 radius:(double)arg3 curve:(double)arg4 opacity:(double)arg5 color:(id)arg6 enabled:(BOOL)arg7 ;
+(id)keyPathsForValuesAffectingTSUColor;
+(BOOL)automaticallyNotifiesObserversOfTSUColor;
-(void)saveToArchive:(ShadowArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const ShadowArchive*)arg1 unarchiver:(id)arg2 ;
-(NSString *)presetKind;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(id)mixedBaseObjectWithObject:(id)arg1 ;
-(void)applyToContext:(CGContextRef)arg1 viewScale:(double)arg2 flipped:(BOOL)arg3 ;
-(void)applyToContext:(CGContextRef)arg1 viewScale:(double)arg2 flipped:(BOOL)arg3 extraOffset:(CGSize)arg4 ;
-(CGRect)shadowBoundsForRect:(CGRect)arg1 ;
-(CGRect)shadowBoundsForRect:(CGRect)arg1 additionalAngle:(double)arg2 ;
-(BOOL)usesOpenGL;
-(id)shadowByTransformingByTransform:(CGAffineTransform)arg1 ;
-(CGPoint)offsetDelta;
-(CGRect)shadowBoundsForRect:(CGRect)arg1 additionalTransform:(CGAffineTransform)arg2 ;
-(double)clampOffset:(double)arg1 ;
-(double)clampRadius:(double)arg1 ;
-(double)clampOpacity:(double)arg1 ;
-(id)newShadowClampedForSwatches;
-(BOOL)isContactShadow;
-(BOOL)isDropShadow;
-(BOOL)isCurvedShadow;
-(BOOL)showForEditingText;
-(void)applyToContext:(CGContextRef)arg1 viewScale:(double)arg2 ;
-(CGRect)boundsInNaturalSpaceForRep:(id)arg1 ;
-(CGRect)boundsForRep:(id)arg1 ;
-(CGImageRef)newShadowImageForRep:(id)arg1 withSize:(CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(BOOL)arg4 ;
-(BOOL)differenceRequiresRebuilding:(id)arg1 ;
-(id)NSShadow;
-(id)i_initWithOpacity:(double)arg1 color:(id)arg2 enabled:(BOOL)arg3 ;
-(CGImageRef)i_newEmptyImage;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopy;
-(TSUColor *)color;
-(double)opacity;
-(double)offset;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)angle;
-(id)typeDescription;
-(double)radius;
-(unsigned long long)shadowType;
@end

