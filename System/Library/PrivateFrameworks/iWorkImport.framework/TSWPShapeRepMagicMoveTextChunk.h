/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSWPShapeRep, NSString, NSMutableIndexSet;

@interface TSWPShapeRepMagicMoveTextChunk : NSObject {

	BOOL _hasListLabel;
	BOOL _isVisible;
	TSWPShapeRep* _rep;
	NSString* _stringValue;
	NSMutableIndexSet* _unhandledIndexSet;
	long long _stageIndex;
	double _opacityFromRenderer;
	NSRange _range;

}

@property (assign,nonatomic) TSWPShapeRep * rep;                                 //@synthesize rep=_rep - In the implementation block
@property (assign,nonatomic) NSRange range;                                      //@synthesize range=_range - In the implementation block
@property (nonatomic,copy) NSString * stringValue;                               //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic) BOOL hasListLabel;                                  //@synthesize hasListLabel=_hasListLabel - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * unhandledIndexSet;              //@synthesize unhandledIndexSet=_unhandledIndexSet - In the implementation block
@property (assign,nonatomic) long long stageIndex;                               //@synthesize stageIndex=_stageIndex - In the implementation block
@property (assign,nonatomic) BOOL isVisible;                                     //@synthesize isVisible=_isVisible - In the implementation block
@property (assign,nonatomic) double opacityFromRenderer;                         //@synthesize opacityFromRenderer=_opacityFromRenderer - In the implementation block
-(void)setIsVisible:(BOOL)arg1 ;
-(void)setRep:(TSWPShapeRep *)arg1 ;
-(TSWPShapeRep *)rep;
-(long long)stageIndex;
-(BOOL)hasListLabel;
-(void)setHasListLabel:(BOOL)arg1 ;
-(NSMutableIndexSet *)unhandledIndexSet;
-(void)setUnhandledIndexSet:(NSMutableIndexSet *)arg1 ;
-(void)setStageIndex:(long long)arg1 ;
-(double)opacityFromRenderer;
-(void)setOpacityFromRenderer:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)isVisible;
-(NSString *)stringValue;
-(NSRange)range;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setRange:(NSRange)arg1 ;
@end

