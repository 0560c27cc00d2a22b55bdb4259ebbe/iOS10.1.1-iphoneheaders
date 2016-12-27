/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUIFoundation/SearchUISFImage.h>

@class NSURL;

@interface SPUICloudDocumentImage : SearchUISFImage {

	NSURL* _url;

}

@property (retain) NSURL * url;              //@synthesize url=_url - In the implementation block
-(NSURL *)url;
-(Class)classForCoder;
-(id)initWithURL:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)loadImage;
@end

