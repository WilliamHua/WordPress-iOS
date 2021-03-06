#import <Foundation/Foundation.h>

/**
 *  @class      WPlogger
 *  @brief      This module takes care of the logging setup for WPiOS.
 */
@interface WPLogger : NSObject

#pragma mark - Reading from the log

/**
 *  @brief      Retrieves log data from the log files.
 * 
 *  @param      maxSize     The maximum number of bytes to retrieve from the log files.
 *
 *  @returns    The requested log data.
 */
- (NSString *)getLogFilesContentWithMaxSize:(NSInteger)maxSize;

@end
