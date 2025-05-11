use fern::Dispatch;
use std::fs::OpenOptions;

use tracing::info;
use tracing_appender::rolling;
use tracing_subscriber::{fmt, EnvFilter};
use chrono::{DateTime, Local, TimeZone, Utc};
use tracing_subscriber::fmt::time::FormatTime;
use std::fmt;
pub fn setup_logger() -> Result<(), fern::InitError> {
    let log_file = OpenOptions::new()
        .append(true)
        .create(true)
        .open("/home/sakthi-16099/sakthi/problem-solving/rust_basics/app.log")?;

    Dispatch::new()
        .format(|out, message, record| {
            out.finish(format_args!(
                "[{}][{}] {}",
                record.level(),
                record.target(),
                message
            ))
        })
        .level(log::LevelFilter::Info)
        .chain(std::io::stdout()) // Console logging
        .chain(log_file) // File logging
        .apply()?;
    Ok(())
}
use tracing_subscriber::fmt::writer::BoxMakeWriter;
use tracing_subscriber::{ layer::SubscriberExt, util::SubscriberInitExt};
impl FormatTime for CustomTime {
    fn format_time(&self, w: &mut fmt::Formatter<'_>) -> fmt::Result {
        // Get current UTC time
        let now_utc: DateTime<Utc> = Utc::now();
        
        // Convert to local time (adjust if needed)
        let now_local = now_utc.with_timezone(&Local);

        // Format as "YYYY-MM-DD HH:MM:SS:ms"
        write!(w, "{}", now_local.format("%Y-%m-%d %H:%M:%S:%3f"))
    }
}


pub fn init_logging() {
    let file = OpenOptions::new()
        .append(true) // Append to the log file
        .create(true) // Create if it doesn't exist
        .open("app.log")
        .expect("Failed to open log file");

    let writer = BoxMakeWriter::new(file);

    tracing_subscriber::registry()
        .with(fmt::layer().with_writer(writer).compact() .with_ansi(false)      // ✅ Keep ANSI colors
        )
        .init();
}
