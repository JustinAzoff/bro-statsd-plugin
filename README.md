NCSA::Statsd
=================================

Statsd client for Bro.

Basic Usage:

    event SSH::log_ssh(rec: SSH::Info)
    {
        local s = fmt("bro.ssh.login.%s", rec$status);
        statsd_increment(s, 1);
    }
