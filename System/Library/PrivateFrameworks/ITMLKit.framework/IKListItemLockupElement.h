/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSString, NSArray, IKTextElement, IKProgressIndicatorElement, IKActivityIndicatorElement, IKCheckMarkElement, IKOrdinalElement, IKViewElement;

@interface IKListItemLockupElement : IKViewElement

@property (nonatomic,readonly) NSString * itemHeight; 
@property (nonatomic,retain,readonly) NSArray * images; 
@property (nonatomic,retain,readonly) IKTextElement * title; 
@property (nonatomic,retain,readonly) IKTextElement * subtitle; 
@property (nonatomic,retain,readonly) NSArray * decorationImages; 
@property (nonatomic,retain,readonly) IKTextElement * decorationLabel; 
@property (nonatomic,retain,readonly) IKProgressIndicatorElement * progressIndicator; 
@property (nonatomic,retain,readonly) IKActivityIndicatorElement * activityIndicator; 
@property (nonatomic,retain,readonly) IKCheckMarkElement * checkMark; 
@property (nonatomic,retain,readonly) IKOrdinalElement * ordinal; 
@property (nonatomic,retain,readonly) IKViewElement * relatedContent; 
-(IKTextElement *)title;
-(NSArray *)images;
-(IKTextElement *)subtitle;
-(IKActivityIndicatorElement *)activityIndicator;
-(IKViewElement *)relatedContent;
-(IKOrdinalElement *)ordinal;
-(NSArray *)decorationImages;
-(IKTextElement *)decorationLabel;
-(IKCheckMarkElement *)checkMark;
-(NSString *)itemHeight;
-(IKProgressIndicatorElement *)progressIndicator;
@end
