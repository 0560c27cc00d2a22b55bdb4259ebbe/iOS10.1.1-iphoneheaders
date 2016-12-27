/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSWPLayoutTarget;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSDLayout, NSMutableArray, TSUPointerKeyDictionary, TSWPColumn, TSDWrapSegments, NSArray;

@interface TPTextWrapCookie : NSObject {

	TSDLayout*<TSWPLayoutTarget> _target;
	NSMutableArray* _floatingWrappables;
	TSUPointerKeyDictionary* _wrapSegmentsInverseTransformInRootDictionary;
	TSWPColumn* _column;
	TSDWrapSegments* _interiorWrapSegments;
	CGAffineTransform _targetInverseTransformInRoot;

}

@property (nonatomic,retain) TSWPColumn * column;                                           //@synthesize column=_column - In the implementation block
@property (assign,nonatomic) TSDLayout*<TSWPLayoutTarget> target; 
@property (nonatomic,retain,readonly) NSArray * floatingWrappables;                         //@synthesize floatingWrappables=_floatingWrappables - In the implementation block
@property (nonatomic,retain) TSDWrapSegments * interiorWrapSegments;                        //@synthesize interiorWrapSegments=_interiorWrapSegments - In the implementation block
@property (nonatomic,readonly) CGAffineTransform targetInverseTransformInRoot;              //@synthesize targetInverseTransformInRoot=_targetInverseTransformInRoot - In the implementation block
+(id)textWrapCookieForColumn:(id)arg1 targetLayout:(id)arg2 ;
-(TSDWrapSegments *)interiorWrapSegments;
-(id)initWithColumn:(id)arg1 targetLayout:(id)arg2 ;
-(void)addFloatingWrappable:(id)arg1 ;
-(NSArray *)floatingWrappables;
-(CGAffineTransform)targetInverseTransformInRoot;
-(id)transformedWrapSegmentsForWrappable:(id)arg1 canvasSpaceToWrapSpaceTransform:(CGAffineTransform)arg2 ;
-(void)setInteriorWrapSegments:(TSDWrapSegments *)arg1 ;
-(void)dealloc;
-(void)setTarget:(TSDLayout*<TSWPLayoutTarget>)arg1 ;
-(TSDLayout*<TSWPLayoutTarget>)target;
-(TSWPColumn *)column;
-(void)setColumn:(TSWPColumn *)arg1 ;
@end
