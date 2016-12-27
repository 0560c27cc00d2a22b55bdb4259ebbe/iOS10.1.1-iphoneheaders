/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIApplicationExtensionActivity.h>

@class TabDocument;

@interface AddToNewsUIActivity : UIApplicationExtensionActivity {

	TabDocument* _tabDocument;

}

@property (nonatomic,retain) TabDocument * tabDocument;              //@synthesize tabDocument=_tabDocument - In the implementation block
+(id)activityWithTabDocument:(id)arg1 error:(id*)arg2 ;
+(long long)activityCategory;
-(TabDocument *)tabDocument;
-(id)initWithApplicationExtension:(id)arg1 tabDocument:(id)arg2 ;
-(void)setTabDocument:(TabDocument *)arg1 ;
-(id)init;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)_beforeActivity;
@end

