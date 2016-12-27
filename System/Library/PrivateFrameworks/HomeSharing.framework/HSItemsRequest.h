/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HSRequest.h>

@interface HSItemsRequest : HSRequest {

	BOOL _shouldParseResponse;
	BOOL _includeHiddenItems;

}

@property (assign,nonatomic) BOOL shouldParseResponse;              //@synthesize shouldParseResponse=_shouldParseResponse - In the implementation block
@property (assign,nonatomic) BOOL includeHiddenItems;               //@synthesize includeHiddenItems=_includeHiddenItems - In the implementation block
+(id)requestWithDatabaseID:(unsigned)arg1 ;
+(id)requestWithDatabaseID:(unsigned)arg1 containerID:(unsigned)arg2 ;
-(id)initWithAction:(id)arg1 ;
-(id)initWithDatabaseID:(unsigned)arg1 ;
-(id)initWithDatabaseID:(unsigned)arg1 containerID:(unsigned)arg2 ;
-(BOOL)shouldParseResponse;
-(void)setShouldParseResponse:(BOOL)arg1 ;
-(BOOL)includeHiddenItems;
-(void)setIncludeHiddenItems:(BOOL)arg1 ;
-(double)timeoutInterval;
-(id)canonicalResponseForResponse:(id)arg1 ;
@end

