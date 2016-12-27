/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDStroke.h>
#import <iWorkImport/TSDMutableStroke.h>
@class TSUColor, TSDStrokePattern;


@protocol TSDMutableStroke
@property (nonatomic,copy) TSUColor * color; 
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double actualWidth; 
@property (assign,nonatomic) int cap; 
@property (assign,nonatomic) int join; 
@property (assign,nonatomic) double miterLimit; 
@property (nonatomic,copy) TSDStrokePattern * pattern; 
@required
-(void)setPropertiesFromStroke:(id)arg1;
-(void)setPatternPropertiesFromStroke:(id)arg1;
-(void)setActualWidth:(double)arg1;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1;
-(TSUColor *)color;
-(void)setColor:(id)arg1;
-(double)width;
-(void)setWidth:(double)arg1;
-(TSDStrokePattern *)pattern;
-(double)actualWidth;
-(void)setPattern:(id)arg1;
-(void)setCap:(int)arg1;
-(void)setJoin:(int)arg1;
-(int)cap;
-(int)join;

@end


@class TSUColor, TSDStrokePattern;

@interface TSDMutableStroke : TSDStroke <TSDMutableStroke>

@property (assign,nonatomic) BOOL dontClearBackground; 
@property (nonatomic,copy) TSUColor * color; 
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double actualWidth; 
@property (assign,nonatomic) int cap; 
@property (assign,nonatomic) int join; 
@property (assign,nonatomic) double miterLimit; 
@property (nonatomic,copy) TSDStrokePattern * pattern; 
+(id)emptyStroke;
+(id)stroke;
-(void)setPropertiesFromStroke:(id)arg1 ;
-(void)setPatternPropertiesFromStroke:(id)arg1 ;
-(void)setActualWidth:(double)arg1 ;
-(void)setDontClearBackground:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(TSUColor *)color;
-(void)setColor:(TSUColor *)arg1 ;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(TSDStrokePattern *)pattern;
-(double)actualWidth;
-(void)setPattern:(TSDStrokePattern *)arg1 ;
-(void)setCap:(int)arg1 ;
-(void)setJoin:(int)arg1 ;
-(int)cap;
-(int)join;
@end
