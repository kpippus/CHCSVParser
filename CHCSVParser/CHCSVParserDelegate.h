//
//  CHCSVParserDelegate.h
//  CHCSVParser
//
//  Created by Dave DeLong on 9/11/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CHCSVParserDelegate <NSObject>

- (void)parser:(CHCSVParser *)parser didStartDocument:(NSString *)csvFile;
- (void)parser:(CHCSVParser *)parser didStartLine:(NSUInteger)lineNumber;

- (void)parser:(CHCSVParser *)parser didEndLine:(NSUInteger)lineNumber;

- (void)parser:(CHCSVParser *)parser didReadField:(NSString *)field;
- (void)parser:(CHCSVParser *)parser didReadComment:(NSString *)comment;

- (void)parser:(CHCSVParser *)parser didEndDocument:(NSString *)csvFile;

- (void)parser:(CHCSVParser *)parser didFailWithError:(NSError *)error;

@end
