/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ML3StatementCacheNode;

@interface ML3StatementCacheList : NSObject {

	ML3StatementCacheNode* _firstNode;
	ML3StatementCacheNode* _lastNode;

}

@property (nonatomic,readonly) ML3StatementCacheNode * firstNode;              //@synthesize firstNode=_firstNode - In the implementation block
@property (nonatomic,readonly) ML3StatementCacheNode * lastNode;               //@synthesize lastNode=_lastNode - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(unsigned long long)count;
-(id)description;
-(ML3StatementCacheNode *)firstNode;
-(void)appendNode:(id)arg1 ;
-(void)promoteNodeWithDictionaryKey:(id)arg1 ;
-(id)oldestNode;
-(void)deleteOldestNode;
-(void)deleteAllNodes;
-(ML3StatementCacheNode *)lastNode;
@end

