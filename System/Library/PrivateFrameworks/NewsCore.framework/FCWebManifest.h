/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCAssetHandle, NSString, NSURL, FCWebArchiveSource, FCInterestToken;

@interface FCWebManifest : NSObject {

	FCAssetHandle* _excerptAssetHandle;
	NSString* _articleID;
	NSURL* _sourceURL;
	FCWebArchiveSource* _webArchiveSource;
	FCInterestToken* _webArchiveHoldToken;

}

@property (nonatomic,copy) NSString * articleID;                                 //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,retain) NSURL * sourceURL;                                  //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,retain) FCWebArchiveSource * webArchiveSource;              //@synthesize webArchiveSource=_webArchiveSource - In the implementation block
@property (nonatomic,retain) FCAssetHandle * excerptAssetHandle;                 //@synthesize excerptAssetHandle=_excerptAssetHandle - In the implementation block
@property (nonatomic,retain) FCInterestToken * webArchiveHoldToken;              //@synthesize webArchiveHoldToken=_webArchiveHoldToken - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSURL * baseURL; 
-(id)init;
-(NSURL *)URL;
-(NSURL *)baseURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(FCAssetHandle *)excerptAssetHandle;
-(FCWebArchiveSource *)webArchiveSource;
-(id)initWithArticleID:(id)arg1 sourceURL:(id)arg2 webArchiveSource:(id)arg3 excerptAssetHandle:(id)arg4 ;
-(void)setExcerptAssetHandle:(FCAssetHandle *)arg1 ;
-(void)setWebArchiveSource:(FCWebArchiveSource *)arg1 ;
-(FCInterestToken *)webArchiveHoldToken;
-(void)setWebArchiveHoldToken:(FCInterestToken *)arg1 ;
@end

