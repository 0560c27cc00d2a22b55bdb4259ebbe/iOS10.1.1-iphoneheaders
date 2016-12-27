/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CPMLBestShim.framework/CPMLBestShim
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CPMLBestShim/CPMLBestShim.h>

@class NSMutableDictionary, NSMutableString, NSDictionary, CDSession, CDAttribute;

@interface CPMLBestBadgeShim : CPMLBestShim {

	NSMutableDictionary* learnedWeights;
	NSMutableDictionary* hysteresis;
	NSMutableString* weightsPath;
	NSDictionary* configPList;
	CDSession* cdSession;
	CDAttribute* cdBundleIdAttribute;

}

@property (retain) NSMutableDictionary * learnedWeights; 
@property (retain) NSMutableDictionary * hysteresis; 
@property (retain) NSMutableString * weightsPath; 
@property (retain) NSDictionary * configPList; 
@property (retain) CDSession * cdSession; 
@property (retain) CDAttribute * cdBundleIdAttribute; 
+(id)bestShim;
+(id)bestShimWithDBPath:(id)arg1 withModelPath:(id)arg2 withPListPath:(id)arg3 ;
-(void)setHysteresis:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)hysteresis;
-(CDSession *)cdSession;
-(void)setCdSession:(CDSession *)arg1 ;
-(id)rankItems:(id)arg1 withMetaInfo:(id)arg2 withNumOfRankItem:(unsigned long long)arg3 ;
-(void)feedback:(id)arg1 withItemsVisited:(id)arg2 ;
-(void)setCdBundleIdAttribute:(CDAttribute *)arg1 ;
-(void)setWeightsPath:(NSMutableString *)arg1 ;
-(NSMutableString *)weightsPath;
-(void)setLearnedWeights:(NSMutableDictionary *)arg1 ;
-(void)setConfigPList:(NSDictionary *)arg1 ;
-(NSDictionary *)configPList;
-(NSMutableDictionary *)learnedWeights;
-(CDAttribute *)cdBundleIdAttribute;
@end

