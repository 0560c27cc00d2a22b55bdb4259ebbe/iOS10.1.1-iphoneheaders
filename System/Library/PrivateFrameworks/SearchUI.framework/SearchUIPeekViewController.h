/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class SFSearchResult;

@interface SearchUIPeekViewController : UIViewController {

	SFSearchResult* _result;

}

@property (retain) SFSearchResult * result;              //@synthesize result=_result - In the implementation block
+(id)peekViewControllerForResult:(id)arg1 style:(unsigned long long)arg2 ;
-(SFSearchResult *)result;
-(void)setResult:(SFSearchResult *)arg1 ;
-(id)initWithResult:(id)arg1 ;
@end

