/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSBundle, NSDictionary, NSMutableArray, NSArray, PHAsset, NSNumber;

@interface CLSInvestigationSnapshotAssetCollectionBundle : NSObject {

	NSURL* _url;
	NSBundle* _bundle;
	NSDictionary* _infoDictionary;
	NSDictionary* _collectionMetadataDictionary;
	NSMutableArray* _allItems;
	NSArray* _curatedCollection;
	PHAsset* _curatedAsset;
	NSNumber* _curatedCollectionScore;
	NSNumber* _curatedAssetScore;
	NSNumber* _inputCollectionScore;

}

@property (setter=setCollectionMetadataDictionary:,getter=collectionMetadataDictionary,nonatomic,retain) NSDictionary * collectionMetadataDictionary; 
@property (nonatomic,retain) NSArray * curatedCollection;                                                                                                          //@synthesize curatedCollection=_curatedCollection - In the implementation block
@property (nonatomic,retain) PHAsset * curatedAsset;                                                                                                               //@synthesize curatedAsset=_curatedAsset - In the implementation block
@property (nonatomic,retain) NSNumber * curatedCollectionScore;                                                                                                    //@synthesize curatedCollectionScore=_curatedCollectionScore - In the implementation block
@property (nonatomic,retain) NSNumber * curatedAssetScore;                                                                                                         //@synthesize curatedAssetScore=_curatedAssetScore - In the implementation block
@property (nonatomic,retain) NSNumber * inputCollectionScore;                                                                                                      //@synthesize inputCollectionScore=_inputCollectionScore - In the implementation block
+(id)bundleWithURL:(id)arg1 ;
-(id)init;
-(id)infoDictionary;
-(id)url;
-(id)initWithURL:(id)arg1 ;
-(id)bundle;
-(id)bundleName;
-(id)makeInfoDictionary;
-(NSDictionary *)collectionMetadataDictionary;
-(NSNumber *)inputCollectionScore;
-(NSArray *)curatedCollection;
-(NSNumber *)curatedCollectionScore;
-(PHAsset *)curatedAsset;
-(NSNumber *)curatedAssetScore;
-(id)momentsName;
-(void)setCollectionMetadataDictionary:(NSDictionary *)arg1 ;
-(id)allInputAssetsInfo;
-(id)allInputAssetCollectionScore;
-(id)bestCuratedSubsetInfo;
-(id)bestCuratedAssetInfo;
-(id)bestCuratedSubsetCollectionScore;
-(id)imageURLForName:(id)arg1 extension:(id)arg2 ;
-(void)writeTo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setCuratedCollection:(NSArray *)arg1 ;
-(void)setCuratedAsset:(PHAsset *)arg1 ;
-(void)setCuratedCollectionScore:(NSNumber *)arg1 ;
-(void)setCuratedAssetScore:(NSNumber *)arg1 ;
-(void)setInputCollectionScore:(NSNumber *)arg1 ;
@end

