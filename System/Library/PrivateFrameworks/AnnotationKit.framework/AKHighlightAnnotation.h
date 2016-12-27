/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotation.h>
#import <libobjc.A.dylib/AKParentAnnotationProtocol.h>

@class AKAnnotation, UIColor, NSString, NSArray;

@interface AKHighlightAnnotation : AKAnnotation <AKParentAnnotationProtocol> {

	unsigned long long _style;
	UIColor* _color;
	NSString* _contents;
	NSArray* _quadPoints;

}

@property (assign) unsigned long long style;                        //@synthesize style=_style - In the implementation block
@property (retain) UIColor * color;                                 //@synthesize color=_color - In the implementation block
@property (copy) NSString * contents;                               //@synthesize contents=_contents - In the implementation block
@property (retain) NSArray * quadPoints;                            //@synthesize quadPoints=_quadPoints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) AKAnnotation * childAnnotation; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)style;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(NSString *)contents;
-(void)setContents:(NSString *)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)displayName;
-(id)keysForValuesToObserveForUndo;
-(id)keysForValuesToObserveForRedrawing;
-(CGRect)hitTestBounds;
-(void)flattenModelExifOrientation:(long long)arg1 withModelSize:(CGSize)arg2 ;
-(void)translateBy:(CGPoint)arg1 ;
-(NSArray *)quadPoints;
-(void)setQuadPoints:(NSArray *)arg1 ;
@end

