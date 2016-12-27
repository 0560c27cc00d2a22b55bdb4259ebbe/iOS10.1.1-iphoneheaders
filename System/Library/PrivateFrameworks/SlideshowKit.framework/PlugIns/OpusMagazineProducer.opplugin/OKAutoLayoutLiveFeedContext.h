/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMagazineProducer.opplugin/OpusMagazineProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface OKAutoLayoutLiveFeedContext : NSObject {

	NSMutableDictionary* _layoutInfos;
	NSString* _primaryResolutionKey;
	long long _pagesGenerated;
	long long _mediasUsed;

}

@property (nonatomic,retain) NSMutableDictionary * layoutInfos;              //@synthesize layoutInfos=_layoutInfos - In the implementation block
@property (nonatomic,retain) NSString * primaryResolutionKey;                //@synthesize primaryResolutionKey=_primaryResolutionKey - In the implementation block
@property (assign,nonatomic) long long pagesGenerated;                       //@synthesize pagesGenerated=_pagesGenerated - In the implementation block
@property (assign,nonatomic) long long mediasUsed;                           //@synthesize mediasUsed=_mediasUsed - In the implementation block
-(void)setPrimaryResolutionKey:(NSString *)arg1 ;
-(long long)mediasUsed;
-(long long)pagesGenerated;
-(NSString *)primaryResolutionKey;
-(NSMutableDictionary *)layoutInfos;
-(void)setPagesGenerated:(long long)arg1 ;
-(void)setMediasUsed:(long long)arg1 ;
-(void)setLayoutInfos:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
@end

