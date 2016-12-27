/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASPurchasedItem.h>

@class LSApplicationProxy, UIImage;

@interface ASMSLocalExtensionItem : ASPurchasedItem {

	LSApplicationProxy* _proxy;
	UIImage* _icon;

}

@property (nonatomic,retain) LSApplicationProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) UIImage * icon;                          //@synthesize icon=_icon - In the implementation block
-(BOOL)isSupportedOnIPad;
-(BOOL)isSupportedOnIPhone;
-(id)purchasedDate;
-(BOOL)isFamilyShareable;
-(id)bundleIdentifier;
-(id)title;
-(void)setIcon:(UIImage *)arg1 ;
-(UIImage *)icon;
-(LSApplicationProxy *)proxy;
-(id)initWithApplicationProxy:(id)arg1 ;
-(long long)itemIdentifier;
-(long long)parentalControlsRank;
-(id)primaryItemOffer;
-(id)artistName;
-(BOOL)isNewsstandApp;
-(id)artworkURLForSize:(long long)arg1 ;
-(id)categoryName;
-(long long)versionIdentifier;
-(id)versionString;
-(id)artworkImage;
-(id)largestArtworkURL;
-(void)setProxy:(LSApplicationProxy *)arg1 ;
@end

