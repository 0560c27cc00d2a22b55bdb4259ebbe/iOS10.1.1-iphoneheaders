/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCommonCore/IMJPEGPrefetch.h>
#import <IMCommonCore/BKBookCoverPrefetch.h>

@class NSURL, NSString;

@interface BKBookCoverJPEGPrefetch : IMJPEGPrefetch <BKBookCoverPrefetch> {

	NSURL* _cachedURL;

}

@property (nonatomic,retain) NSURL * cachedURL;                     //@synthesize cachedURL=_cachedURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)cachedURL;
-(void)setCachedURL:(NSURL *)arg1 ;
@end

