/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionReusableView.h>
#import <libobjc.A.dylib/SiriUIReusableView.h>

@class UILabel, NSString, SiriUISnippetViewController;

@interface SiriAlternativeParaphraseReusableHeader : UICollectionReusableView <SiriUIReusableView> {

	UILabel* _titleLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) SiriUISnippetViewController * snippetViewController; 
+(double)defaultHeight;
+(id)reuseIdentifier;
+(id)elementKind;
-(void)configureWithText:(id)arg1 ;
@end

