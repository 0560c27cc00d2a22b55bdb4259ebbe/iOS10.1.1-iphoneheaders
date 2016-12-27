/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NCContentServiceInterface.h>

@class NSDictionary;

@interface NCContentViewController : UIViewController <NCContentServiceInterface> {

	NSDictionary* _context;

}

@property (nonatomic,copy) NSDictionary * context;              //@synthesize context=_context - In the implementation block
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(NSDictionary *)context;
-(void)setContext:(NSDictionary *)arg1 ;
-(void)_setContext:(id)arg1 ;
-(void)_getPreferredContentSizeWithCompletion:(/*^block*/id)arg1 ;
@end

