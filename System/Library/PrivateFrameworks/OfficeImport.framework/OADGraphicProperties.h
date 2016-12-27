/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADDrawableProperties.h>
#import <libobjc.A.dylib/OADEffectsParent.h>
#import <libobjc.A.dylib/OADProperties3DParent.h>

@class OADFill, NSArray, OADScene3D, OADShape3D, OADStroke, NSString;

@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {

	OADFill* mFill;
	NSArray* mEffects;
	NSArray* mExts;
	OADScene3D* mScene3D;
	OADShape3D* mShape3D;
	OADStroke* mStroke;
	unsigned mHasIsBehindText : 1;
	unsigned mIsBehindText : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)fill;
-(id)stroke;
-(void)setParent:(id)arg1 ;
-(void)setFill:(id)arg1 ;
-(void)setStroke:(id)arg1 ;
-(BOOL)hasFill;
-(BOOL)hasStroke;
-(id)effects;
-(void)setEffects:(id)arg1 ;
-(void)setScene3D:(id)arg1 ;
-(void)setShape3D:(id)arg1 ;
-(void)setIsBehindText:(BOOL)arg1 ;
-(id)initWithDefaults;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(void)setExts:(id)arg1 ;
-(BOOL)hasExts;
-(BOOL)hasIsBehindText;
-(id)exts;
-(BOOL)isBehindText;
-(BOOL)hasNonEmptyFill;
-(BOOL)hasScene3D;
-(BOOL)hasShape3D;
-(id)scene3D;
-(id)shape3D;
-(BOOL)hasEffects;
-(void)removeUnnecessaryOverrides;
@end

