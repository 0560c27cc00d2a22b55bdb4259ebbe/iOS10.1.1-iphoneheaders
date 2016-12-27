/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ML3Entity, NSString, NSDictionary;

@interface ML3ArtworkTokenSet : NSObject {

	ML3Entity* _entity;
	long long _artworkType;
	NSString* _availableArtworkToken;
	NSString* _fetchableArtworkToken;
	long long _fetchableArtworkSourceType;
	NSDictionary* _artworkSourceToTokenMap;
	BOOL _faultedInBestTokens;
	BOOL _faultedInTokens;
	double _retrievalTime;

}

@property (assign,nonatomic) double retrievalTime;                                //@synthesize retrievalTime=_retrievalTime - In the implementation block
@property (nonatomic,readonly) NSString * availableArtworkToken; 
@property (nonatomic,readonly) NSString * fetchableArtworkToken; 
@property (nonatomic,readonly) long long fetchableArtworkSourceType; 
-(void)_faultInBestTokens;
-(void)_faultInTokens;
-(id)initWithEntity:(id)arg1 artworkType:(long long)arg2 ;
-(long long)fetchableArtworkSourceType;
-(id)artworkTokenForSource:(long long)arg1 ;
-(void)setRetrievalTime:(double)arg1 ;
-(double)retrievalTime;
-(NSString *)availableArtworkToken;
-(NSString *)fetchableArtworkToken;
@end

