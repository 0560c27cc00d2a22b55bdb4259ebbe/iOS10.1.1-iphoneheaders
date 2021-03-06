/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASCategoriesDatasourceProtocol.h>

@class SKUIClientContext, NSString, UIImage;

@interface ASMSCategoriesDataSourceProtocolOverride : NSObject <ASCategoriesDatasourceProtocol> {

	UIImage* _fallbackImage;
	Class _artworkLoaderClass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<ASCategoriesDatasourceDelegate> delegate; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) BOOL showDisclosureByDefault; 
@property (nonatomic,retain) UIImage * fallbackImage;                                         //@synthesize fallbackImage=_fallbackImage - In the implementation block
@property (nonatomic,retain) Class artworkLoaderClass;                                        //@synthesize artworkLoaderClass=_artworkLoaderClass - In the implementation block
@property (assign,nonatomic) BOOL showIcons; 
@property (assign,nonatomic) BOOL excludesNearby; 
-(void)setFallbackImage:(UIImage *)arg1 ;
-(Class)artworkLoaderClass;
-(unsigned long long)headerTypeForSection:(unsigned long long)arg1 ;
-(BOOL)excludesNearby;
-(void)setArtworkLoaderClass:(Class)arg1 ;
-(id)titleForSection:(unsigned long long)arg1 ;
-(UIImage *)fallbackImage;
@end

