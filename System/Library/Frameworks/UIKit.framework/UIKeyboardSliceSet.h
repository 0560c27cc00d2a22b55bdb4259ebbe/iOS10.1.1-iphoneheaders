/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSString, NSMutableSet, NSMutableDictionary;

@interface UIKeyboardSliceSet : NSObject {

	NSString* _ssid;
	NSMutableSet* _slices;
	CGRect _startRect;
	CGRect _endRect;
	double _leftWidth;
	double _rightWidth;
	double _mergePoint;
	NSMutableDictionary* _controlKeys;

}

@property (readonly) NSMutableSet * slices;                        //@synthesize slices=_slices - In the implementation block
@property (retain) NSString * sliceSetID;                          //@synthesize ssid=_ssid - In the implementation block
@property (assign) CGRect startRect;                               //@synthesize startRect=_startRect - In the implementation block
@property (assign) CGRect endRect;                                 //@synthesize endRect=_endRect - In the implementation block
@property (assign) double leftWidth;                               //@synthesize leftWidth=_leftWidth - In the implementation block
@property (assign) double rightWidth;                              //@synthesize rightWidth=_rightWidth - In the implementation block
@property (assign) double mergePoint;                              //@synthesize mergePoint=_mergePoint - In the implementation block
@property (retain) NSMutableDictionary * controlKeys;              //@synthesize controlKeys=_controlKeys - In the implementation block
+(id)sliceSetWithDictionaryRepresenation:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(CGRect)endRect;
-(NSString *)sliceSetID;
-(id)initWithSliceID:(id)arg1 ;
-(void)setStartRect:(CGRect)arg1 ;
-(void)setEndRect:(CGRect)arg1 ;
-(void)setLeftWidth:(double)arg1 ;
-(void)setRightWidth:(double)arg1 ;
-(void)addSlice:(id)arg1 ;
-(NSMutableSet *)slices;
-(void)setSliceSetID:(NSString *)arg1 ;
-(CGRect)startRect;
-(double)leftWidth;
-(double)rightWidth;
-(double)mergePoint;
-(void)setMergePoint:(double)arg1 ;
-(NSMutableDictionary *)controlKeys;
-(void)setControlKeys:(NSMutableDictionary *)arg1 ;
@end

